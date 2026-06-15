// fichero 8893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8893;

Registro8893 crear_registro8893(int id) {
    Registro8893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
