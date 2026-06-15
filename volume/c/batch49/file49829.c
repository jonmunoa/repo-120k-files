// fichero 49829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49829;

Registro49829 crear_registro49829(int id) {
    Registro49829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
