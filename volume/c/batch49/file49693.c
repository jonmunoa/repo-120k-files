// fichero 49693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49693;

Registro49693 crear_registro49693(int id) {
    Registro49693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
