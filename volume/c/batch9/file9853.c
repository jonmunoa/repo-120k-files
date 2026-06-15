// fichero 9853 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9853;

Registro9853 crear_registro9853(int id) {
    Registro9853 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
