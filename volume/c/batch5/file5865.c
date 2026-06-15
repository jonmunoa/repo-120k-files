// fichero 5865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5865;

Registro5865 crear_registro5865(int id) {
    Registro5865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
