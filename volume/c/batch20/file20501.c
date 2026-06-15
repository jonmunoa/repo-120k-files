// fichero 20501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20501;

Registro20501 crear_registro20501(int id) {
    Registro20501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
