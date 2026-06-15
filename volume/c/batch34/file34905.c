// fichero 34905 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34905;

Registro34905 crear_registro34905(int id) {
    Registro34905 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
