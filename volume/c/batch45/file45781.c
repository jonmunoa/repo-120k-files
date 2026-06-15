// fichero 45781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45781;

Registro45781 crear_registro45781(int id) {
    Registro45781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
