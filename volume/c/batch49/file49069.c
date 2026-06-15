// fichero 49069 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49069;

Registro49069 crear_registro49069(int id) {
    Registro49069 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
