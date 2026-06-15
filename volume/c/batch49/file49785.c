// fichero 49785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49785;

Registro49785 crear_registro49785(int id) {
    Registro49785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
