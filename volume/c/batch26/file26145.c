// fichero 26145 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26145;

Registro26145 crear_registro26145(int id) {
    Registro26145 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
