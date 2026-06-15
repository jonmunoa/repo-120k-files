// fichero 18497 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18497;

Registro18497 crear_registro18497(int id) {
    Registro18497 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
