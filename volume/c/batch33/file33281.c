// fichero 33281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33281;

Registro33281 crear_registro33281(int id) {
    Registro33281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
