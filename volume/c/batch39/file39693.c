// fichero 39693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39693;

Registro39693 crear_registro39693(int id) {
    Registro39693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
