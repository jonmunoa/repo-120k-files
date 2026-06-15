// fichero 34505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34505;

Registro34505 crear_registro34505(int id) {
    Registro34505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
