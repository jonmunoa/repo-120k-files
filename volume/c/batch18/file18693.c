// fichero 18693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18693;

Registro18693 crear_registro18693(int id) {
    Registro18693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
