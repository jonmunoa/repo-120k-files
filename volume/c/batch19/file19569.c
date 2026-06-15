// fichero 19569 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19569;

Registro19569 crear_registro19569(int id) {
    Registro19569 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
