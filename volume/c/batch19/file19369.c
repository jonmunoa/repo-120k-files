// fichero 19369 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19369;

Registro19369 crear_registro19369(int id) {
    Registro19369 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
