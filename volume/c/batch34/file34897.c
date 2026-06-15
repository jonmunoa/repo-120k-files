// fichero 34897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34897;

Registro34897 crear_registro34897(int id) {
    Registro34897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
