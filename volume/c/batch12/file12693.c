// fichero 12693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12693;

Registro12693 crear_registro12693(int id) {
    Registro12693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
