// fichero 34829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34829;

Registro34829 crear_registro34829(int id) {
    Registro34829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
