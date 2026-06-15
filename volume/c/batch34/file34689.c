// fichero 34689 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34689;

Registro34689 crear_registro34689(int id) {
    Registro34689 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
