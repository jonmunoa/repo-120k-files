// fichero 34201 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34201;

Registro34201 crear_registro34201(int id) {
    Registro34201 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
