// fichero 26769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26769;

Registro26769 crear_registro26769(int id) {
    Registro26769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
