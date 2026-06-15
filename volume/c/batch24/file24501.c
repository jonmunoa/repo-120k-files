// fichero 24501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24501;

Registro24501 crear_registro24501(int id) {
    Registro24501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
