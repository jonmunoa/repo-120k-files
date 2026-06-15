// fichero 11837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11837;

Registro11837 crear_registro11837(int id) {
    Registro11837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
