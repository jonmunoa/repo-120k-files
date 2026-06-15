// fichero 20985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20985;

Registro20985 crear_registro20985(int id) {
    Registro20985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
