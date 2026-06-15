// fichero 19857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19857;

Registro19857 crear_registro19857(int id) {
    Registro19857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
