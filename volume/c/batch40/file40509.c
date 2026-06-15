// fichero 40509 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40509;

Registro40509 crear_registro40509(int id) {
    Registro40509 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
