// fichero 19897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19897;

Registro19897 crear_registro19897(int id) {
    Registro19897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
