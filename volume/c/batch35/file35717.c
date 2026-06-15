// fichero 35717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35717;

Registro35717 crear_registro35717(int id) {
    Registro35717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
