// fichero 35693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35693;

Registro35693 crear_registro35693(int id) {
    Registro35693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
