// fichero 18149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18149;

Registro18149 crear_registro18149(int id) {
    Registro18149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
