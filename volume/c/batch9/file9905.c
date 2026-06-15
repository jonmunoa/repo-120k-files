// fichero 9905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9905;

Registro9905 crear_registro9905(int id) {
    Registro9905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
