// fichero 19001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19001;

Registro19001 crear_registro19001(int id) {
    Registro19001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
