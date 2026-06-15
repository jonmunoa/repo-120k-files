// fichero 12945 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12945;

Registro12945 crear_registro12945(int id) {
    Registro12945 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
