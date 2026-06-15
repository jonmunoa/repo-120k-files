// fichero 9801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9801;

Registro9801 crear_registro9801(int id) {
    Registro9801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
