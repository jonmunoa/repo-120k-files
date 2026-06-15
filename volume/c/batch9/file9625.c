// fichero 9625 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9625;

Registro9625 crear_registro9625(int id) {
    Registro9625 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
