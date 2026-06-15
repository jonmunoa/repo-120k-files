// fichero 31897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31897;

Registro31897 crear_registro31897(int id) {
    Registro31897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
