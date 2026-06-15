// fichero 17793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17793;

Registro17793 crear_registro17793(int id) {
    Registro17793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
