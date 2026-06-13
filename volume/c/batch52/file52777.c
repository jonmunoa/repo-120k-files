// fichero 52777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52777;

Registro52777 crear_registro52777(int id) {
    Registro52777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52777(Registro52777 r) {
    return r.valor + r.id;
}
