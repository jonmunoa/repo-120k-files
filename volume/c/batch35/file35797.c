// fichero 35797 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35797;

Registro35797 crear_registro35797(int id) {
    Registro35797 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
