// fichero 5161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5161;

Registro5161 crear_registro5161(int id) {
    Registro5161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
