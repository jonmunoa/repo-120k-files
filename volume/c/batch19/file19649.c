// fichero 19649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19649;

Registro19649 crear_registro19649(int id) {
    Registro19649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
