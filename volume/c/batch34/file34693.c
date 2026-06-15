// fichero 34693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34693;

Registro34693 crear_registro34693(int id) {
    Registro34693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
