// fichero 44981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44981;

Registro44981 crear_registro44981(int id) {
    Registro44981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
