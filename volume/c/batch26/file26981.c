// fichero 26981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26981;

Registro26981 crear_registro26981(int id) {
    Registro26981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
