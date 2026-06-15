// fichero 34913 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34913;

Registro34913 crear_registro34913(int id) {
    Registro34913 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
