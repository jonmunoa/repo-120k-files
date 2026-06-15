// fichero 36505 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36505;

Registro36505 crear_registro36505(int id) {
    Registro36505 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
