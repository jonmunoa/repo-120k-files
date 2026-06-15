// fichero 17221 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17221;

Registro17221 crear_registro17221(int id) {
    Registro17221 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
