// fichero 41869 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41869;

Registro41869 crear_registro41869(int id) {
    Registro41869 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
