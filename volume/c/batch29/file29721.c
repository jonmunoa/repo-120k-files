// fichero 29721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29721;

Registro29721 crear_registro29721(int id) {
    Registro29721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
