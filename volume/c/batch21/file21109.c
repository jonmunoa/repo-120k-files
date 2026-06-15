// fichero 21109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21109;

Registro21109 crear_registro21109(int id) {
    Registro21109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
