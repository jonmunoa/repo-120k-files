// fichero 38225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38225;

Registro38225 crear_registro38225(int id) {
    Registro38225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
