// fichero 33781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33781;

Registro33781 crear_registro33781(int id) {
    Registro33781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
