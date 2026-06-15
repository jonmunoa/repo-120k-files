// fichero 47741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47741;

Registro47741 crear_registro47741(int id) {
    Registro47741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
