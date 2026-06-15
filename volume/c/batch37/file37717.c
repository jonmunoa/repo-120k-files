// fichero 37717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37717;

Registro37717 crear_registro37717(int id) {
    Registro37717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
